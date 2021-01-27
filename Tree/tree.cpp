#include <bits/stdc++.h>
#define ll long long
#define foro for(int i=0;i<n;i++)
#define MAX 100003
using namespace std;

// struct tree
// {
//     int data;
//     tree* left;
//     tree* right;
// };

// tree* createnode(int data)
// {
//     tree* temp=new tree;
//     temp->data=data;
//     temp->left=NULL;
//     temp->right=NULL;
//     return temp;
// }

// tree* insert(int a[],tree* root,int i,int n)
// {
//     if(i<n)
//     {
//         tree* temp=createnode(a[i]);
//         root=temp;
//         root->left=insert(a,root->left,2*i+1,n);
//         root->right=insert(a,root->right,2*i+2,n);
//     }
//     return root;
// }

// void inorder(tree* root)
// {
//     if(root)3
//     {
//         inorder(root->left);
//         cout<<root->data<<" ";
//         inorder(root->right);
//     }
// }

int main()
{
    int n,k;
    cin>>n>>k;
    int a[MAX],b[MAX];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    // tree* root=NULL;
    foro
    {
        cin>>a[i];
        if(i==0)b[0]=a[0];
        if(i>0)b[i]=b[i-1]+a[i];
        // root=insert(a[i],root);
    }
    int i=0;
    // root=insert(a,root,i,n);
    // inorder(root);
    while(k--)
    {
        int q;
        cin>>q;
        if(q==1)
        {
            int x,l;
            cin>>x>>l;
            cout<<a[(int(pow(2,x-1))-2)+l]<<endl;
        }
        else if(q==2)
        {
            int l,r;
            cin>>l>>r;
            if(int(pow(2,r))-2>n-1)
            {
                cout<<b[n-1]-b[int(pow(2,l))-2]<<endl;
            }
            else
            {
                cout<<b[int(pow(2,r))-2]-b[int(pow(2,l))-2]<<endl;
            }
            
        }
        else if(q==3)
        {
            int x,l,v;
            cin>>x>>l>>v;
            a[int(pow(2,x-1)-1)+l]=v;
            b[]
        }
        
    }
    return 0;
}

    