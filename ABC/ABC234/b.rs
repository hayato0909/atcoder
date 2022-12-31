use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        n: usize,
        p: [(i32, i32); n],
    }

    let mut ans: i32 = 0;

    for i in 0..n {
        let (x1, y1) = p[i];
        for j in i+1..n {
            let (x2, y2) = p[j];
            ans = max(ans, (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        }
    }

    println!("{}", (ans as f64).sqrt());
}