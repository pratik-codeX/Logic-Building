function SumFact(No)
{
   let iSum = 0
   
   for(let i = 0;i <= (No/2);i++)
   {
   if((No % i) == 0)
   {
        iSum = iSum + i
   }
   }
   return iSum
}
let Value = 12
let iRet = 0

iRet = SumFact(Value)

console.log("Summation of all elements :"+iRet)