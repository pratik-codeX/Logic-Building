function CheckPerfect(No)
{
   let iSum = 0
   let Fact = 0
   
   for(let i = 0;i <= (No/2);i++)
   {
   if((No % i) == 0)
   {
        iSum = iSum + i
   }

   if(iSum == No)
   {
    Fact = true
   }
   else
   {
    Fact =false
    
   }
   }
   return Fact
}
let Value = 12
let iRet = false

iRet = CheckPerfect(Value)

console.log("Summation of all elements :"+iRet)