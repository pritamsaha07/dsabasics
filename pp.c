#include <stdio.h>
#include <stdbool.h>
typedef struct
{
    char roll[6];
    char name[30];
    char branch[30];
    float cgpa;
} STUD;

typedef struct node *nd;
struct node
{
    STUD stu;
    nd left;
    nd rigth;
} NODE;

void inputStud(nd *);
bool treeEmpty(nd *);
void deleteNode(nd *);
void displayAll(nd);
nd searchNode(nd *, nd *, char[]);

int main(void)
{
    int ans, c;
    bool e;
    nd root = NULL;

    do
    {
        printf("----MAIN OPERATIONS----");
        printf("1. Add New Student Record\n");
      
        printf("2. Search Specific Record\n");
        printf("4. Display All\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ans);
        switch (ans)
        {
        case 1:
            inputStud(&root);
            break;
        case 2:
            editStud(&root);
            break;
        case 3:
            displayAll(root);
            break;
        case 4:
            deleteNode(&root);
            break;
        case 5:
            printf("\nExiting...");
        }
    } while (ans != 6);
    return 0;
}

void inputStud(nd *root)
{
    nd t, t1, temp;
    char rollID[6];
    char branch[20];
    char name[30];
    float cg;
    STUD st;

    printf("\nEnter Student Roll Number: ");
    gets(rollID);
    printf("Enter Student's Branch Name: ");
    gets(branch);
    printf("Enter Student's Name: ");
    gets(name);
    printf("Enter Student's cgpa: ");
    scanf("%f", &cg);
    strcpy(st.roll, rollID);
    strcpy(st.branch, branch);
    strcpy(st.name, name);
    st.cgpa = cg;

    temp = malloc(sizeof(NODE));
    temp->stu = st;
    temp->left = NULL;
    temp->rigth = NULL;

    if (*root == NULL)
    {
        *root = temp;
    }
    else
    {
        t = *root;
        while (t != NULL)
        {
            t1 = t;
            if(strcmp(temp->stu.roll, t->stu.roll) == 0)
                t = t->left;
            else
                t = t->rigth;
        }
        if (strcmp(temp->stu.roll, t1->stu.roll) < 0)
            t1->left = temp;
        else
            t1->rigth = temp;
    }
    t1 = NULL;
    t = NULL;
    temp = NULL;
    return;
}

void deleteNode(nd *root)
{
    char iD[6];
    bool e, lmoved = false;
    nd t, t1, t2;
    STUD st;

    e = treeEmpty(root);
    if (e)
    {
        printf("\n\nSorry, the tree is empty...");
    }
    else
    {
        printf("Please enter ID of student to be deleted: ");
        gets(iD);
        t = searchNode(root, &t1, iD[]);
        if (t == NULL)
        {
            printf("\n\n%s not found...", iD);
        }
        else
        {

            if ((t->left == NULL) && (t->rigth == NULL))
            {
                if (strcmp(iD, t1->stu.roll) < 0)
                    t1->left = NULL;
                else
                    t1->rigth = NULL;
            }
            else if ((t->left == NULL) && (t->rigth != NULL))
            {

                if (strcmp(iD, t1->stu.roll) < 0)
                    t1->left = t->rigth;
                else
                    t1->rigth = t->rigth;
            }
            else if ((t->left != NULL) && (t->rigth == NULL))
            {

                if (strcmp(iD, t1->stu.roll) < 0)
                    t1->left = t->left;
                else
                    t1->rigth = t->left;
            }
            else
            {

                t1 = t;
                t = t1->rigth;
                while (t->left != NULL)
                {
                    t2 = t;
                    t = t->left;
                    lmoved = true;
                }
                t1->stu.roll = t->stu.roll;
                if (t->rigth == NULL)
                {
                    if (lmoved)
                        t2->left = NULL;
                    else
                        t1->rigth = NULL;
                }
                else
                {
                    if (lmoved)
                        t2->left = t->rigth;
                    else
                        t1->rigth = t->rigth;
                }
            }
            free(t);
            t1 = NULL;
            t2 = NULL;
        }
    }
    return;
}



bool treeEmpty(nd *r)
{
    bool e = false;
    if (*r == NULL)
        e = true;
    return e;
}

void displayAll(nd ptr)
{
    if (ptr != NULL)
    {
        printf("Student ID: %s", stu.roll);
        printf("First Name: %s", stu.name);
        printf("Middle Initial: %s", stu.mName);
        printf("Last Name: %s", stu.branch);
        printf("cgpa: %f", stu.cgpa);
    }
    return;
}