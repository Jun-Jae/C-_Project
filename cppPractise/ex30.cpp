#include <iostream>

using namespace std;

class Stock
{
private: // 접근 제어자
    string name;
    int shares;
    float share_val;
    double total_val;
    void set_total() { total_val = shares * share_val; }

public: // 접근 제어자
    void acquire(string, int, float);
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    Stock();
    ~Stock();
};

void Stock::acquire(string co, int n, float pr)
{
    name = co;
    shares = n;
    share_val = pr;
    set_total();
}

void Stock::buy(int n, float pr)
{
    shares += n;
    share_val = pr;
    set_total();
}
void Stock::sell(int n, float pr)
{
    shares -= n;
    share_val = pr;
    set_total();
}
void Stock::update(float pr)
{
    share_val = pr;
    set_total();
}
void Stock::show()
{
    cout << "회사 명 : " << name << endl;
    cout << "주식 수 : " << shares << endl;
    cout << "주가 : " << share_val << endl;
    cout << "주식 총 가치 : " << total_val << endl;
}

// 사용 범위 결정 연산자 ::
Stock::Stock() // 생성자
{
}

Stock::~Stock() // 파괴자 : 매개변수를 가질 수 없다.
{
}
int main()
{
    // 추상화와 클래스
    // 클래스란?
    // 추상화를 사용자 정의 데이터형으로 변환해주는 수단
    // 추상화란?
    // 어떠한 객체를 사실적으로 표현하는 것이 아니라
    // 공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것
    /*
    1. 클래스 선언
    2. 클래스 매서드 정의
    */

    Stock temp;
    temp.acquire("Panda", 100, 1000);
    temp.show();
    temp.buy(10, 1200);
    temp.show();
    temp.sell(5, 800);
    temp.show();

    return 0;
}