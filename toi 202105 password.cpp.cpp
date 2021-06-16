#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int count = 1;
	int arr[26] = {0};
	int ls[26]  = {0};
  int tmp;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		arr[str[i] - 'A']++;
		ls[str[i] - 'A']++;
		if (str[i] == ' ')
		count++;
	}
	
 for(int gi=0 ; gi<26 ; gi=gi+1 )
    {
        for( int j=gi+1 ; j<26 ; j=j+1 )
        {
            if( ls[gi] > ls[j] )
            {
                
                tmp = ls[gi];
                ls[gi] = ls[j];
                ls[j] = tmp;
            }
        }
    }



	for (int j = 25; j >=0; j--){
  for(int q=0;q<26;q++){
    if(ls[j]==arr[q]&&ls[j]!=0){
			cout << (char)('A' +q);
      arr[q]=0;
	
	}


  }
}
}