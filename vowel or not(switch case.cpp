#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	
	if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
	{
		switch(ch)
		{
			case'a':
				case'e':
					case'i':
						case'o':
							case'u':
								case'A':
									case'E':
										case'I':
											case'O':
												case'U':
			printf("%C is a vowel..",ch);
			break;
			default:
			printf("%c is a constant...",ch);										
		}
	}
	else
	printf("%c is not an alphabet.",ch);
	return 0;
}
