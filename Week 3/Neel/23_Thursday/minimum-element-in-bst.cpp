// your task is to complete the below function
int minValue(Node* root)
{
    // Code here
    if(root == NULL){
        return -1;
    }
    
    if(root->left == NULL){
        return root->data;
    }
    
    minValue(root->left);
}