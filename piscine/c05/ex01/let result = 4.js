let result = 4.2 % 10;

function putnbr (num = 42)
{
    console.log(num);
    if(num > 9)
    {
        putnbr(num / 10);
    }
    console.log(num % 10);
}

putnbr(51);