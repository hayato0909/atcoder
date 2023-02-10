use proconio::input;
// use superslice::Ext;
use std::cmp::max;
// use std::cmp::min;

fn gcd(a: i32, b: i32) -> i32 {
    if a < b {
        return gcd(b, a);
    } else if b == 0 {
        return a;
    } else {
        let c = a % b;
        return gcd(b, c);
    }
}

fn main() {
    input! {
        n: usize,
        a: [i32; n],
    }
    let mut l = vec![0; n];
    let mut r = vec![0; n];
    l[0] = a[0];
    for i in 1..n {
        l[i] = gcd(l[i-1], a[i]);
    }
    r[n-1] = a[n-1];
    for i in 0..n-2 {
        r[n-2-i] = gcd(r[n-1-i], a[n-2-i]);
    }

    let mut ans: i32 = 0;
    for i in 0..n {
        let mut tmp: i32 = 0;
        if i == 0 {
            tmp = r[i+1];
        } else if i == n - 1 {
            tmp = l[i-1];
        } else {
            tmp = gcd(l[i-1], r[i+1]);
        }
        ans = max(ans, tmp);
    }
    println!("{}", ans);
}