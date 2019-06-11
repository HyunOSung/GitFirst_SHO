//Hello World!

//콘솔응용프로그램, 빈프로젝트, SDL X

//프로그램을 만드는 목적 : 내가 하기 귀찮은 일들을 컴퓨터에게 시키는 목적
//컴퓨터가 절차를 수행하기 위한 목록을 작성한 것
// 2진수, 2진수에서 10진수로 변환

//이진법 -> 변환한 결과물이 어셈블리어
//컴퓨터 구조, 어셈블리어 등등의 전공자에게 물어보는 것들은 다 이유가 있다.
//셰이더 구축도 마찬가지.

//최적화의 시작은 다르다는 것에서 부터 시작, 컴파일러가 다르면 결과물도 다르다.

#include"engine.h"
#include"Player.h"
#include"Map.h"
#include"Util.h"

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80


// ""는 컴파일러가 설정한 범위 밖의 것들도 검색해서 적용
// <>는 컴파일러가 설정한 범위 내에서만 검색해서 적용(컴파일러 표준)

//알고리즘은 주어진 조건에서 최적을 찾는것

///& 주소 연산자
//패리티 체크
//매니지드 언어, 언매니지드 언어
//프로그램 카운터

//int main(int args, char* argv) //엔트리 포인트, int args : 콘솔 상에서 특정 값을 받아옴 / char argv :  콘솔 상에서 문자형을 받아옴
//{
//	
//	//int : 정수형
//	//int* a =  (int*)malloc(sizeof(int)*3) ; //포인터의 역할은 내가 얼마나 설정해서 메모리를 사용하겠다는 선언의 의미., (int*)는 형변환 선언
//	//int b = 1;
//
//	//scanf("%d", &a);
//	//scanf("%d", &b);
//
//	//printf("%d", a + b);
//	 
//	
//
//
//	return 0;
//
//	
//}




int main()
{
	Engine* engine = new Engine(); //필요한 함수만 불러오도록
	engine->Run();  //(*engine).Run();
	delete engine;  //설정한 영역에 들어갈 메모리 확보
	return 0;

}