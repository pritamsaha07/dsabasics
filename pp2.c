#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int rollno;
    char name[20];
    char branch[20];
    float CGPA;
    struct tree *lptr;
    struct tree *rptr;
};

void create(struct tree **root, int val)
{
    struct tree *newnode = (struct tree *)malloc(sizeof(struct tree));
    newnode->rollno = val;
    printf("Enter Name: ");
    scanf("%s", &newnode->name);
    printf("Enter Branch: ");
    scanf("%s", &newnode->branch);
    printf("Enter CGPA: ");
    scanf("%f", &newnode->CGPA);
    newnode->rptr = NULL;
    newnode->lptr = NULL;
    struct tree *ptr = *root, *parent;
    if (!ptr)
    {
        *root = newnode;
        printf("Data inserted Successfully\n");
        return;
    }

    while (ptr != NULL)
    {
        parent = ptr;
        if (ptr->rollno < val)
        {
            ptr = ptr->rptr;
        }
        else if (ptr->rollno > val)
        {
            ptr = ptr->lptr;
        }
        else
        {
            printf("Data cannot be inserted.\n");
            return;
        }
    }
    if (parent->rollno > val)
        parent->lptr = newnode;
    else
        parent->rptr = newnode;
    printf("Data inserted Successfully\n");
    return;
}

int searchBST(struct tree *root, int val)
{
    while (root != NULL)
    {
        if (root->rollno < val)
            root = root->rptr;
        else if (root->rollno > val)
            root = root->lptr;
        else if (root->rollno == val)
        {
            if (root->rptr != NULL)
            {
                if (root->lptr != NULL)
                    return 3;
                else
                    return 2;
            }
            return 1;
        }
    }
    return 0;
}

void delete0(struct tree **root, int val)
{
    struct tree *ptr = *root, *parent;
    if (!*root)
        return;
    if (ptr->rollno == val)
        root = NULL;
    else
    {
        while (ptr->rollno != val)
        {
            parent = ptr;
            if (ptr->rollno < val)
                ptr = ptr->rptr;
            else if (ptr->rollno > val)
                ptr = ptr->lptr;
        }

        if (parent->lptr->rollno == val)
        {
            parent->lptr = NULL;
        }
        else if (parent->rptr->rollno == val)
        {
            parent->rptr = NULL;
        }
        free(ptr);
    }
}
void delete1(struct tree **root, int val)
{
    struct tree *ptr = *root, *parent;
    if (!*root)
        return;
    if (ptr->rollno == val)
        root = NULL;
    else
    {
        while (ptr->rollno != val)
        {
            parent = ptr;
            if (ptr->rollno < val)
                ptr = ptr->rptr;
            else if (ptr->rollno > val)
                ptr = ptr->lptr;
        }

        struct tree *t;
        if (ptr->lptr != NULL)
            t = ptr->lptr;
        else
            t = ptr->rptr;

        if (parent->lptr->rollno == val)
            parent->lptr = t;
        else
            parent->rptr = t;
        free(ptr);
    }
}
void delete2(struct tree **root, int val)
{
    struct tree *ptr = *root;
    struct tree *parent;
    if (!*root)
        return;

    while (ptr->rollno != val)
    {
        parent = ptr;
        if (ptr->rollno < val)
            ptr = ptr->rptr;
        else if (ptr->rollno > val)
            ptr = ptr->lptr;
    }
    if (ptr->lptr->rptr == NULL)
    {
        if (parent->lptr->rollno == val)
        {
            parent->lptr = ptr->lptr;
            ptr->lptr->rptr = ptr->rptr;
        }
        else
        {
            parent->rptr = ptr->lptr;
            ptr->lptr->rptr = ptr->rptr;
        }
    }
    else
    {
        struct tree *t = ptr->lptr->rptr, *parentt = ptr->lptr;
        while (t->rptr != NULL)
        {
            parentt = t;
            t = t->rptr;
        }
        parentt->rptr = NULL;
        t->lptr = ptr->lptr;
        t->rptr = ptr->rptr;
        parent->lptr = t;
    }
    free(ptr);
}

void printdata(struct tree *T)
{
    if (T != NULL)
    {
        if (T->CGPA > 6.0)
        {
            printf("\n///////////////////////////////////////////\n\n");
            printf("RollNo.: %d\n", T->rollno);
            printf("Name: %s\n", T->name);
            printf("Branch: %s\n", T->branch);
            printf("CGPA: %.2f\n", T->CGPA);
        }
        printdata(T->lptr);
        printdata(T->rptr);
    }
}

int main()
{
    struct tree *T = NULL;
    int choice, num, inf = 1;
    while (inf)
    {
        printf("\n///////////////////////////////////////////\n\n");
        printf("Enter 1 to create a new record \n");
        printf("Enter 2 to search a student using its roll number.\n");
        printf("Enter 3 to delete student's data using its roll number\n");
        printf("Enter 4 to print in Inorder format\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the roll number : ");
            scanf("%d", &num);
            create(&T, num);
            break;
        }
        case 2:
        {
            printf("Enter the roll number to be searched  ");
            scanf("%d", &num);
            if (searchBST(T, num))
                printf("RollNo. Present.\n");
            else
                printf("RollNo. Not Present.\n");
            break;
        }
        case 3:
        {
            printf("Enter the Rollno of the student whose record has to be deleted: ");
            scanf("%d", &num);
            switch (searchBST(T, num))
            {
            case 1:
                delete0(&T, num);
                printf("Record Deleted Successfully.\n");
                break;
            case 2:
                delete1(&T, num);
                printf("Record Deleted Successfully.\n");
                break;
            case 3:
                delete2(&T, num);
                printf("Record Deleted Successfully.\n");
                break;
            default:
                printf("Record Not Found.\n");
                break;
            }
            break;
        }
        case 4:
        {
            printf("Student Records: \n");
            printdata(T);
            break;
        }
        default:
        {
            inf = 0;
            break;
        }
        }
    }
}