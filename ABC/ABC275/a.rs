use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        n: usize,
        h: [i32; n],
    }

    let mut hei = 0;
    let mut ans = 0;
    for i in 0..n {
        if hei < h[i] {
            hei = h[i];
            ans = i as i32 + 1;
        }
    }

    println!("{}", ans);
}