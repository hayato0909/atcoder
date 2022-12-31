use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        a: i64,
        b: i64,
        c: i64,
        d: i64,
        e: i64,
        f: i64,
    }

    let mo: i64 = 998244353;
    let mut tmp1: i64 = a % mo;
    tmp1 = (tmp1 * (b % mo)) % mo;
    tmp1 = (tmp1 * (c % mo)) % mo;
    let mut tmp2: i64 = d % mo;
    tmp2 = (tmp2 * (e % mo)) % mo;
    tmp2 = (tmp2 * (f % mo)) % mo;
    let mut ans = tmp1 - tmp2;
    while ans < 0 {ans += mo}
    println!("{}", ans);
}