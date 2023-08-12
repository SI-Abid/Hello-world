int numTestCases = int.Parse(Console.ReadLine());

for (int i = 0; i < numTestCases; i++)
{
    string input = Console.ReadLine();

    bool isDivisibleBy6 = IsDivisibleBy6(input);

    if (isDivisibleBy6)
    {
        Console.WriteLine("red");
    }
    else
    {
        Console.WriteLine("cyan");
    }
}

static bool IsDivisibleBy6(string input)
{
    int sumOfDigits = 0;
    bool even = false;
    int zero = 0; 
    // Calculate the sum of the digits
    foreach (char digitChar in input)
    {
        int digit = digitChar - '0';
        sumOfDigits += digit;
        if (digit == 0) zero++;
        else if(digit%2==0) even=true;
    }

    // Check if the number is even and the sum of digits is divisible by 3
    return (zero>=2 || (zero==1 && even)) && sumOfDigits % 3 == 0;
}