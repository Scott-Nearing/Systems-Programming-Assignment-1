//Scott Nearing
//sn379745
struct node {
  struct node *left;
  struct node *right;
  char word[STRLEN];};

typedef struct node Node;
typedef Node * nodePtr;
