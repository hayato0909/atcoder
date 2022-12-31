use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        mut n: i64,
    }

    let mut flag: bool = false;
    if n < 0 {
        n = -1 * n;
        flag = true;
    }
    let mo: i64 = 998244353;
    let num: i64 = n / mo;
    let mut ans = n - mo * num;
    if flag && ans != 0 {ans = mo*(num+1)-n}
    println!("{}", ans);
}