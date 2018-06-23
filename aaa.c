aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
funtionaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
master
bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb

我需要解决sharebuy紧急的bug
public class sharebuy {
public static void main(String[] args) {

//定义两个变量
int a = 10 ;
int b = 20 ;

//调用求和功能去实现
//1)单独调用
// sum(a,b) ;
//2)输出调用
// System.out.println(sum(a, b));

//3)赋值调用
int result = sum(a, b) ;
System.out.println("result:"+result);
}

/*
*写方法的注意事项:
*明个明确:
* 1)明确返回值类型 :int类型
* 2)明确参数个数以及参数类型:int类型,2个参数
* */
public static int sum(int a,int b){
//必须有具体的返回值
//定义变量来进行接收
// int c = a + b ;
// return c ;
return a + b ;
}
}