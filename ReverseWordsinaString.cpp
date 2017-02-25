class Solution {
public:
	void reverse(string &s, int be, int ed)
	{
		while (be<ed)
		{
			char ch = s[be];
			s[be] = s[ed];
			s[ed] = ch;
			be++;
			ed--;
		}
	}
	void reverseWords(string &s) {
		int count = 0;
		int flag = false;
		for (int i = 0; i<s.length(); i++)
		{
			if (s[i] == ' '&&flag)
			{
				flag = false;
				s[count] = ' ';
				count++;
			}
			if (s[i] != ' ')
			{
				flag = true;
				s[count] = s[i];
				count++;
			}
		}
		if (flag == false)
			s = s.substr(0, max(0,count - 1));
		else
			s = s.substr(0, count);
		reverse(s, 0, s.length() - 1);
		int be = 0, ed = 0;
		while (be<s.length() && ed<s.length())
		{
			while (ed<s.length() && s[ed] != ' ')
			{
				ed++;
			}
			reverse(s, be, ed - 1);
			ed++;
			be = ed;
		}
	}
};