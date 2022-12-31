use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        a: i32,
        b: i32,
        c: i32,
        x: i32,
    }

    if x <= a {println!("1")}
    else if x > b {println!("0")}
    else {println!("{}", c as f64/(b as f64 - a as f64))}
}