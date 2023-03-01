#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s1,s2,s3,s;
    cin>>s1;
    cin>>s2;
    cin>>s3;

    s=s1+s2;

    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());

   // cout<<s<<"\n";
    //cout<<s3;

    if(s==s3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }





/*

    int i,sum=0,l1,l2,l3,total=0;

    ///1
    l1=s1.length();
    for(i=0;i<l1;i++)
    {
        sum=sum+int(s1[i]);
    }
    ///2
    l2=s2.length();
    for(i=0;i<l2;i++)
    {
        sum=sum+int(s2[i]);
    }
    ///3
    l3=s3.length();
    for(i=0;i<l3;i++)
    {
        total=total+int(s3[i]);
    }



    if(sum==total)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    cout<<"\n"<<sum<<" "<<total;


*/


    return 0;
}

