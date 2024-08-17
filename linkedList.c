#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct linked_list {
  int val;
  struct linked_list *next;
};

struct linked_list *head = NULL;
struct linked_list *curr = NULL;
int count = 0;

struct linked_list *create_list(int val) {
  printf("Creating list with headnode as [%d]\n", val);
  struct linked_list *ptr =
      (struct linked_list *)malloc(sizeof(struct linked_list));

  if (NULL == ptr) {
    printf("Node creation failed\n");
    return NULL;
  }

  ptr->val = val;
  ptr->next = NULL;
  count++;

  head = curr = ptr;
  return ptr;
}

struct linked_list *add_to_list(int val, int add_to_end) {
  if (NULL == head) {
    return (create_list(val));
  }

  if (add_to_end)
    printf("Adding the node to the end of list with value [%d]\n", val);
  else
    printf("Adding the node to beginning of list with value [%d]\n", val);

  struct linked_list *ptr =
      (struct linked_list *)malloc(sizeof(struct linked_list));
  if (NULL == ptr) {
    printf("Node creation failed\n");
    return NULL;
  }

  ptr->val = val;
  ptr->next = NULL;
  count++;

  if (add_to_end) {
    curr->next = ptr;
    curr = ptr;
  } else {
    ptr->next = head;
    head = ptr;
  }

  return ptr;
}

struct linked_list *insert_to_list(int val, int pos) {
  if (pos > count + 1) {
    printf("Entered position is invalid. Adding node to the end [%d].\n",
           count + 1);
    pos = count + 1;
  }

  struct linked_list *ptr = head;
  struct linked_list *new_node =
      (struct linked_list *)malloc(sizeof(struct linked_list));

  if (NULL == new_node) {
    printf("Node creation failed.\n");
    return NULL;
  }

  new_node->val = val;
  new_node->next = NULL;

  if (pos == 1 || pos == count + 1) {
    if (pos == 1)
      return (add_to_list(val, 0));
    else
      return (add_to_list(val, 1));
  }

  printf("Inserting [val = %d] at %d position.\n", val, pos);

  int index = 1;
  while (index < pos - 1) {
    ptr = ptr->next;
    index++;
  }

  new_node->next = ptr->next;
  ptr->next = new_node;
  count++;

  return ptr;
}

struct linked_list *search_in_list(int val, struct linked_list **prev) {
  struct linked_list *ptr = head;
  struct linked_list *tmp = NULL;
  int found = 0;

  while (ptr != NULL) {
    if (ptr->val == val) {
      found = 1;
      break;
    } else {
      tmp = ptr;
      ptr = ptr->next;
    }
  }

  if (found) {
    if (prev)
      *prev = tmp;
    return ptr;
  } else {
    return NULL;
  }
}

int delete_from_list(int val) {
  struct linked_list *prev = NULL;
  struct linked_list *del = NULL;

  del = search_in_list(val, &prev);
  if (NULL == del)
    return -1;
  else {
    if (prev != NULL)
      prev->next = del->next;

    if (del == curr)
      curr = prev;
    else if (del == head)
      head = del->next;
  }

  free(del);
  del = NULL;
  count--;

  return 0;
}

void print_list(void) {
  struct linked_list *ptr = head;

  printf("-------Printing list Start-------\n");

  while (ptr != NULL) {
    printf("[%d]\n", ptr->val);
    ptr = ptr->next;
  }

  printf("-------Printing list End-------\n");
  printf("Size: %d\n", count);

  return;
}

int main(void) {
  int i = 0, ret = 0;
  struct linked_list *ptr = NULL;

  print_list();

  for (i = 5; i < 10; i++)
    add_to_list(i, 1);

  print_list();

  for (i = 3; i > 0; i--)
    add_to_list(i, 0);

  print_list();

  insert_to_list(4, 4);

  print_list();

  insert_to_list(10, 11);

  print_list();

  for (i = 1; i < 10; i += 4) {
    ptr = search_in_list(i, NULL);
    if (NULL == ptr)
      printf("Search [val = %d] failed. No such element found.\n", i);
    else
      printf("Search passed [val = %d]\n", ptr->val);

    print_list();

    ret = delete_from_list(i);

    if (ret)
      printf("Delete [val = %d] failed. No such element found.\n", i);
    else
      printf("Delete [val = %d] passed\n", i);

    print_list();
  }
  return 0;
}
