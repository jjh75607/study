let message; // 일반 변수 선언
const myBirthday = '~~~~' // 상수 변경이 불가능

// 대문자 상수는 하드코딩을 할 경우만 사용

let admin;
let name;

name = "John";
admin = name;
alert(admin);

let ourPlanetName;
let currentUserName = "John";

//숫자형
let n = 123;
n = 12.345;

let infinity = Infinity; // 무한
let nan = NaN; //계산 중 에러 발생, 

// 끝에 'n'이 붙으면 BigInt형 자료입니다. / 아주 큰 수 
let bigInt = 123123123123123123123123123n;

// null은 값을 비운 상태, undefined는 할당이 되지 않은 상태

typeof name // 자료형

alert(`abcdef ${name}`);

prompt("입력");
confirm("true or false");

let value = true;
String(value);
Number(value);
Boolean(value)

x = (a !== null && a !== undefined) ? a : b;
x = a ?? b;

let sum = (a, b) => a + b;

/* 위 화살표 함수는 아래 함수의 축약 버전입니다.

let sum = function(a, b) {
  return a + b;
};
*/