#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input;
	while (getline(cin, input))
	{
		int len = input.length(); // 取得字串的長度，並避免重複呼叫。
		for (int i = 0; i < len; i++) // 輸出
		{
			if (input[i] == ' ') // 空白不需要解密!
			{
				cout << input[i];
			}
			else
				cout << (char)((int)input[i] - 7); // ASCII Code
		}
		cout << endl;
	}
	return 0;
} // 結束