/*

#반복문 

1) if 문

장 : 조건식이 다양할때 유리
     값과 조건식이 모두 바뀔때 유리
주의! : 들여쓰기가 많아지게 되면 보기 복잡해서 기피해야한다.
        첫 if 문 이후로 else if를 이용해서 조건식 일일히 지정 요함.

ex)

if (first)
    if (second)
        else
    else 
--> 이렇게 가게 되면 들여쓰기가 상당히 많아져서 골치아프다.

if (first && second)
if else (first)
else 
--> 이렇게 머리를 써줘야한다.


2) switch 문 

장 : 조건식이 바뀌지 않고, 값만 바뀌는 경우 유용
중요    break 사용하지 않을시 그 특성을 이용하는 경우
        default의 위치와 특성

개념 : switch 뒤에 오는 조건식 == case 뒤에 오는 비교 조건식 일때 
        case 문에 지정해놓은 반응이 일어나게 된다.
        case 뒤에는 break로 걸어줘서 일치시 뛰어나가게 해준다.

ex) 

int num1;

    scanf("%d", &num1);   

    switch (num1)                   >> num1을 조건식으로 내세움 (보통 조건식에 문자를 넣어준다.)
 
    case 0:
        {
            int num2 = num1;
            printf("%d입니다.\n" , num2);
            break;
        }                           >> case 안에서 변수를 선언함. 이때는 case 내부에서 중괄호가 필요.
    
    case 1:                         >> 비교 조건식으로 1을 내세움. 문자 %c, 정수%d가 와야한다. 실수(double 등등)는 올 수 없다. 
                                        (보통 비교 조건식으로 비교할 값을 넣어준다.)
        printf("1입니다.\n");
        break;                      >> break 로 걸리면 빠져나가게 세팅
    
    case 2:    
        printf("2입니다.\n");       >> num1 == 2로 일치시, 3까지 저절로 흘러가서 break로 탈출된다.
    
    case 3:                         
        printf("3입니다. \n");
        break;
    
    default:                        >> default 는 아무위치나 올 수 있다. 뒤에 비교 조건식도 붙지 않는다.
        printf("default\n");
        break;



3) while 문 

#include <stdio.h>
int main ()
{
    while (조건식)  >> 조건식을 충족시 반복에 들어갈거다.
    {
        상태식;
        변화식;     >> 변화식 : ++ , -- 의미 (변화식이 없다면 무한루프에 빠지게 된다. 꼭 사용해줘야한다.)
    }

    while (1)       >> while (1 또는 True)를 입력시 "무한루프"
    {
        상태식;
        변화식;
    }

    while (조건식)
        상태식;     >> 반복할것이 1개라면 중괄호를 생략하자.
}



4) do while 문 : while 문은 조건식 불일치시 바로 재껴버린다. do while문은 최소 한 번은 실행하고 지나간다.





    */



