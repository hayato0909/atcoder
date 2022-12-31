use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        l1: i32,
        r1: i32,
        l2: i32,
        r2: i32,
    }

    let ans = min(r1, r2) - max(l1, l2);
    println!("{}", max(0, ans));
}