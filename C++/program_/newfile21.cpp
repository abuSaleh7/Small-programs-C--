#include <iostream>
#include <string>
using namespace std;
string NumberToText (int number)
{
    if (number < 0)
    {
        number *=-1;
    }
    if (number ==0)
    {
        return "Zerooo!";
    }
    else if (number >999999999999)
    {
        return "Sory , the number is very large";
    }
    else if (number >=1 && number <= 19)
    {
        string arr[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten",
        "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        return arr[number]+" ";
    }
    else if (number >=20 && number <= 99)
    {
        string arr[]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
        return arr[number/10]+" "+NumberToText(number%10);
    }
    else if (number >=100 && number <= 199)
    {
        return "One Hundred "+NumberToText(number%100);
    }
    else if (number >=200 && number <= 999)
    {
        return NumberToText(number/100)+"Hundreds "+NumberToText(number%100);
    }
    else if (number >=1000 && number <= 1999)
    {
        return "One Thousand "+ NumberToText(number%1000);
    }
    else if (number >=2000 && number <= 999999)
    {
        return NumberToText(number/1000)+"Thousand "+NumberToText(number%1000);
    }
    else if (number >=1000000 && number <= 1999999)
    {
        return "One Million "+ NumberToText(number%1000000);
    }
    else if (number >=2000000 && number <= 999999999)
    {
        return NumberToText(number/1000000)+"Millions "+NumberToText(number%1000000);
    }
    else if (number >=1000000000 && number <= 1999999999)
    {
        return "One Billion "+NumberToText(number%1000000000);
    }
    else if (number >=1 && number <= 19)
    {

        return 0;
    }
    else if (number >=2000000000 && number <= 999999999999)
    {

        return NumberToText(number/1000000000)+"Billions "+NumberToText(number%1000000000);
    }
}
int ReadNumber ()
{
    int number=0;
    cout << "plese enter a number you wnat to convernt it to words : ";
    cin>> number;
    return number;
}
int main()
{
    int number = ReadNumber();
    string number_in_text= NumberToText(number);
    cout << "the number in words is : \n";
    cout<< number_in_text<<endl;
    return 0;
}