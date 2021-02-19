//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/
    
    
    #include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int a[n];
        int k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
    }
         cin>>k;
         for(int i=0;i<n;i++)
         {
             if(a[i]==k)
             {
                 cout<<i<<endl;
             }
             else
             {
                 continue;
             }
         }
    }