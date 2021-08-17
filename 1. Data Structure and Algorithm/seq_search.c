int seq_search(int list[], int key)
{
    int i;
    for(int i=0;i<n;i++)
        if(list[i]==key)
            return i;   // In succeed search, return index of key
    return -1;          // In failed search, return -1
}
