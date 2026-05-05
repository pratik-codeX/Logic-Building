function Maximum(Brr)
{
    let i = 0
    let iMax = Brr[0]

    for(i=0;i<Brr.length;i++)
    {
        if(Brr[i]> iMax)
        {
            iMax = Brr[i]
        }
    }
    return iMax
}
Arr = [41,135,51,56,111,47]
let iRet = 0
iRet = Maximum(Arr)

console.log("Addition of all elements :"+iRet)