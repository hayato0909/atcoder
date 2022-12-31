use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        x: i32,
        y: i32,
        n: i32,
    }
    
    let mut ans: i32;
    if 3 * x < y {ans = x * n}
    else {ans = y*(n/3) + x*(n%3)}
    println!("{}", ans);
}