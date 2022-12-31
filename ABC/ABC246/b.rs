use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;
use std::f64::consts::PI;

fn main() {
    input!{
        a: f64,
        b: f64,
    }

    let d = (a*a+b*b).sqrt();
    println!("{} {}", a/d, b/d);
}