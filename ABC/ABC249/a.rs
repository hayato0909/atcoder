use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        a: i32,
        b: i32,
        c: i32,
        d: i32,
        e: i32,
        f: i32,
        x: i32,
    }

    let mut tmp1: i32;
    let mut tmp2: i32;

    tmp1 = b * a * (x / (a + c));
    tmp1 += b * min(a, x % (a + c));
    tmp2 = d * e * (x / (d + f));
    tmp2 += e * min(d, x % (d + f));

    if tmp1 == tmp2 {println!("Draw")}
    else if tmp1 < tmp2 {println!("Aoki")}
    else {println!("Takahashi")}
}