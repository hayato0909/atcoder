use proconio::input;
use superslice::Ext;

fn main() {
    input!{
        n: usize,
        a: [i32; n],
    }

    let mut ans: usize = n;
    let mut l: usize = 0;

    for i in 1..n {
        let r: usize = i as usize;
        if a[r-1] < a[r] {
            ans += r - l;
        } else {
            l = r;
        }
    }
    println!("{}", ans);
}