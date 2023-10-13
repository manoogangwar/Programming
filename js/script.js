let val1=0 , val2=0,sum=0;
document.getElementById("manu3").onclick=function(){
    val1=Number(document.getElementById("manu1").value)
    val2=Number(document.getElementById("manu2").value)
    sum=val1+val2;
    document.getElementById("manu4").innerHTML=sum;
}
