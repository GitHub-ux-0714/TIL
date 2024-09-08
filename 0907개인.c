/*

#반복문 : if / switch-case 문에 관해서 

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

switch (num1)                   >> num1을 조건식으로 내세움
{
case 1:                         >> 비교 조건식으로 1을 내세움. A가 오든 아무거나 올 수 있다.
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
*/