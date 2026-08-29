#include <iostream>
using namespace std;

int main() {
//step1
	int N;
	cout<<"Readings entered : ";
	cin>>N;

	double readings[N];
	for(int i = 0;i < N;i++)
	{
		cin>>readings[i];
	}

	//step2
	int skip = 0;
	cout<<"\n Valid readings : ";
	for(int i = 0;i <N;i++)
	{
		if(readings[i] < 0)
		{
			skip++;
			continue;
		}
		cout<<readings[i]<<"\t";
	}
	cout<<"\nSkipped (errors) : "<<skip <<endl;

	//step3
	for(int i = 1;i <=N;i++)
		{
			if(readings[i] >= 45)
			{
				cout<<"First CRITICAL   : Index "<<i+1 << " -> "<<readings[i]<<"C"<<endl;
				break;
			}
		}
//step 4
	double min = 99, max = 0;
	int valid = 0;
	double sum = 0;
	for(int i = 0;i <N; i++)
		{
            if(readings[i] < 0)
            {
                continue;
            }
            if(readings[i] < min)
			{
			    min = readings[i];
			}
			if(readings[i]>=max)
			{
			    max=readings[i];
			}
			sum = readings[i] + sum;
            valid++;
		}
		double avg = sum/valid;
	cout<<"Min : "<<min<< "\t Max : " << max << "\t Avg : " << avg << endl;

//Step 5
	int normal = 0, warning = 0,critical = 0, shutdown = 0;

	for(int i=0; i<N; i++)
	{
		if(readings[i] >= 0 && readings[i] <=29)
    	{
    		normal++;
    	}
    	if(readings[i] >= 30 && readings[i] <=44)
    	{
        	warning++;
    	}
    	if(readings[i] >= 45 && readings[i] <=59)
    	{
        	critical++;
    	}
    	if(readings[i] >= 60)
    	{
        	shutdown++;
   		}
	}
	cout << "Normal : "<< normal << " Warning : "<< warning  <<" Critical : "<< critical <<" Shutdown : "<< shutdown;
	
	return 0;
}