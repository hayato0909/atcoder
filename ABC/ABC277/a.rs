use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        n: usize,
        x: i32,
        p: [i32; n],
    }

    let mut ans: usize = 0;
    for i in 0..n {
        if p[i] == x {ans = i + 1}
    }

    println!("{}", ans as i32);
}