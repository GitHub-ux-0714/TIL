#include <stdio.h>

int main ()

{
    int i = 3; 
    printf("%d\n" , i);

    int x = 4;
    printf("%d" , x);

    return 0;
}

/* 

git init

. means 전부 다 
 git add 어떤 파일을 추가해줄지 찾아보겠다.
 --> git add . means 여기 프로젝트 폴더 전부를 올리겠다.
  ex) git add index html (html만 올리고 싶다.)

 git status means 너가 추가해놓은 파일들이 뭔지 현재 상태 알려줌


git commit -m "first commit" 

git commit : 히스토리를 만들어주는것.
"first commit" : 그 히스토리의 이름. 

--> 이 히스토리를 깃 허브에 보낼것이다. 어떻게 보내냐? 연결고리가 필요하다. 


github.com/GitHub-ux-0714/TIL

!!!) git push origin main 하였는데 오류 
    --> git 내부의 내용과 나의 내용이 달라서 일어남
    --> git pull 입력해줘서 끌어온다음 
    --> gi tpush origin main 을 해주면 처리 가능.

내 프로젝트를 공유하고 싶으면 내 github 파일들이 있는 주소를 보내주면 된다.

변경된 이 문서를 다시 업로드 시켜놓고 싶으면?
--> git add .  만 해주면 됨.
--> git init 해줄 필요 없음.
git status를 이용해 내역을 보자. 그러면 git add . 가 수정된 부분을 알려준다.
이제 수정이 새로 되었으니 history 를 새로 부여해줘야한다. (ex 찐 최종 -> 찐찐 최종)4
git commit -m "second commit" 을 이용해서 부여해줌. (m 은 message 라는 뜻)
git push origin main 으로 사이트로 쏴주자. 



*/