#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
int Number()
{
    int n=rand() % 9;
    n=n+1;
    return n;
}
    double MeanFunction(int sum)
{
    double Mean={};
    Mean=(sum/99.00);
    return Mean;
}
int main(){
	 int n[99]={0};
    int sum=0;
    double Mean={};
    int count[9]={0};
    srand(time(0));
      for(int i=0;i<99;i++)
    {
    n[i]=Number();
    sum=sum+n[i];
    if(n[i]==1)
    {
        count[0]=count[0]+1;
    }
    else if(n[i]==2)
    {
        count[1]=count[1]+1;
    }
    else if(n[i]==2)
    {
        count[2]=count[2]+1;
    }
    else if(n[i]==3)
    {
        count[2]=count[2]+1;
    }
    else if(n[i]==4)
    {
        count[3]=count[3]+1;
    }
    else if(n[i]==5)
    {
        count[4]=count[4]+1;;
    }
    else if(n[i]==6)
    {
        count[5]=count[5]+1;;
    }
    else if(n[i]==7)
    {
        count[6]=count[6]+1;;
    }
    else if(n[i]==8)
    {
        count[7]=count[7]+1;;
    }
    else if(n[i]==9)
    {
        count[8]=count[8]+1;;
    }
    }
    
	cout<<endl;
	cout<<"********"<<endl;
	cout<<"  Mean  "<<endl;
	cout<<"********"<<endl;
	 Mean=MeanFunction(sum);
	cout<<"The mean is the average value of the data"<<endl;
	cout<<"items.The mean is equal to the total of"<<endl;
	cout<<"all the data items divided by the number"<<endl;
	cout<<"of data items (99).The mean value for"<<endl;
	cout<<"this run is:"<<sum<<" / "<<" 99 "<<" = "<<Mean<<endl;
    cout<<endl;
    cout<<"**********"<<endl;
    cout<<"  Median  "<<endl;
    cout<<"**********"<<endl;
    cout<<"The unsorted array of responses is:"<<endl;
    for(int i=0;i<99;i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"The sorted array is:"<<endl;
    
    for(int i=0;i<99;i++)
    {
        for(int j=i;j<99;j++)
        {
            if(n[i]>n[j])
            {
            int t=n[j];
            n[j]=n[i];
            n[i]=t;
            }
        }
        cout<<n[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"The Median is element 49 of"<<endl;
	cout<<"the sorted 99 element array."<<endl;
	cout<<"For this run the median is "<<n[49]<<"."<<endl;
    cout<<endl;
    cout<<"********"<<endl;
    cout<<"  Mode  "<<endl;
    cout<<"********"<<endl;
    cout<<left<<setw(25)<<"Response"<<setw(25)<<"Frequency"<<setw(35)<<"Histogram"<<endl;
    cout<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<left<<setw(25)<<i+1<<setw(25)<<count[i];
        for(int j=0;j<count[i];j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    int m=count[0];
    int i,j;
    for( i=1;i<9;i++)
    {
        if(count[i]>m)
        {
            m=count[i];
            j=i;
        }
    }
    
    cout<<"The mode is the most frequent value."<<endl;
    cout<<"For this run the mode is "<<j+1<<" which occurred "<<m<<" times.";
	return 0;
}
