use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;
use std::f64::consts::PI;

fn main() {
    input!{
        n: usize,
        a: [usize; n],
    }

    let mut cut = vec![0; 360];
    let mut d: usize = 0;
    cut[0] += 1;
    for i in a {
        d = (d + i) % 360;
        cut[d as usize] += 1;
    }
    d = 0;
    let mut ans: usize = 0;
    for i in 0..360 {
        if cut[i] != 0 {
            ans = max(ans, i - d);
            d = i;
        }
    }
    ans = max(ans, 360-d);
    println!("{}", ans);
}