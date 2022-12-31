use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        n: i32,
    }

    let c: i32 = n % 10;
    let a: i32 = n / 100;
    let b: i32 = (n / 10) % 10;

    let mut ans: i32 = 0;
    ans += a*100 + b*10 + c;
    ans += b*100 + c*10 + a;
    ans += c*100 + a *10 + b;
    println!("{}", ans);
}