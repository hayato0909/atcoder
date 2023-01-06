use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;
use std::f64::consts::PI;

fn main() {
    input!{
        n: usize,
        m: usize,
        p: [(usize, usize); m],
    }

    let mut v = vec![vec![0; 0]; n+1];
    for (s, t) in p {
        v[s].push(t);
        v[t].push(s);
    }

    let mut ans = 0;
    for a in 1..n+1  {
        for b_i in 0..v[a].len() {
            let b = v[a][b_i];
            for c_i in 0..v[b].len() {
                let c = v[b][c_i];
                let mut flag = false;
                for i in 0..v[c].len() {
                    let pos = v[c][i];
                    if pos == a {flag = true}
                }
                if flag {ans += 1}
            }
        }
    }

    println!("{}", ans/6);
}