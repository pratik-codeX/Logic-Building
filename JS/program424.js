function SumDigits(No)
{
   let iSum = 0
   let iDigit = 0

  while(No != 0)
  {
   
    Digit = (No % 10)
    iSum = iSum + iDigit
    No = Math.floor(No / 10)
   
  }
  return iSum
}
let Value = 123
let iRet = 0

iRet = SumDigits(Value)

console.log("Summetion of Digits are :"+iRet)

