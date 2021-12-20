#include <iostream>

using namespace std;

struct Lich{
	int start;
	int end;
	int stt;
};
void Swap(Lich *a, Lich *b)
{
	 Lich temp = *a;
	 *a = *b;
	 *b = temp;
}
void SapXepChon(Lich arr[], int n, int l){	
	int i,j,vt;
	for(i=0; i<n-1; i++)
	{
	  vt = i;
	  for(j=i+1; j<n; j++)
	  	if(l == 1 && arr[j].start < arr[vt].start)
			vt = j;
		else if(l == 2 && (arr[j].end-arr[j].start) < (arr[vt].end-arr[vt].start))
			vt = j;
		else if(l == 3 && arr[j].end < arr[vt].end)
				vt = j;
	  if(vt != i)
	  	Swap(&arr[i], &arr[vt]);
	}
}
void ActionSelection(Lich arr[], int n, int s[], int l){
	SapXepChon(arr, n, l);
	s[0] = arr[0].stt;
	int d = 1;
	if(l == 2)
	{
		bool kt;
		Lich temp[n];
		temp[0].start = arr[0].start;
		temp[0].end = arr[0].end;
		for(int i=1; i<n; i++)
		{
			kt = true;
			for(int j=0; j<d; j++)
				if((arr[i].end >= temp[j].start) && (arr[i].start <= temp[j].end))
				{
					kt = false;
					break;
				}
			if(kt)
			{
				s[d] = arr[i].stt;
				temp[d].start = arr[i].start;
				temp[d].end = arr[i].end;
				d++;
			}
		}	
	}
	else
	{
		int t = 0;
		for(int i=1; i<n; i++)
			if(arr[t].end <= arr[i].start)
			{
				s[d] = arr[i].stt;
				d++;
				t = i;
		}	
	}
	for(int i=0; i<d; i++)
		cout << "\t" << s[i];
}
int main(){
	Lich arr[8];
	int n = 8, s[8];
	arr[0].start = 2; arr[0].end = 4; arr[0].stt = 1;
	arr[1].start = 3; arr[1].end = 6; arr[1].stt = 2;
	arr[2].start = 1; arr[2].end = 7; arr[2].stt = 3;
	arr[3].start = 9; arr[3].end = 10; arr[3].stt = 4;
	arr[4].start = 5; arr[4].end = 12; arr[4].stt = 5;
	arr[5].start = 8; arr[5].end = 14; arr[5].stt = 6;
	arr[6].start = 13; arr[6].end = 16; arr[6].stt = 7;
	arr[7].start = 11; arr[7].end = 15; arr[7].stt = 8;
	cout << "Ket qua:" << endl;
//	ActionSelection(arr, n, s, 1);
	ActionSelection(arr, n, s, 2);
//	ActionSelection(arr, n, s, 3);
	return 0;
}

