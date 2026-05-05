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
   }
   return (iSum == No)
}
let Value = 12
let bRet = false

bRet = CheckPerfect(Value)

if(bRet == true)
{
    console.log(Value+"is Perfect number")
}
else
{
        console.log(Value+"is not Perfect number")
}
console.log("Summation of all elements :"+iRet)













// function CheckPerfect(No)
// {
//    let iSum = 0
//    let Fact = 0
   
//    for(let i = 0;i <= (No/2);i++)
//    {
//    if((No % i) == 0)
//    {
//         iSum = iSum + i
//    }

//    if(iSum == No)
//    {
//     Fact = true
//    }
//    else
//    {
//     Fact =false
//    }
//    }
//    return Fact
// }
// let Value = 12
// let iRet = 0

// iRet = CheckPerfect(Value)

// console.log("Summation of all elements :"+iRet)