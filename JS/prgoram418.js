function Summetion(Brr)
{
   let sum = 0
    let i = 0

    for(i=0;i<Brr.length;i++)
    {
        sum = sum+Brr[i]
    }
    return sum
}
Arr = [11,21,51,101,111,121]
let iRet = 0
iRet = Summetion(Arr)

console.log("Summation of all elements :"+iRet)