use proconio::input;
use superslice::Ext;

fn main() {
    input!{
        n: usize,
        m: usize,
        p: [[i32;2];m],
    }
    let mut v = vec![vec![0; 0]; n as usize + 1];

    for i in 0..m {
        v[p[i][0] as usize].push(p[i][1]);
    }
    for i in 1..n+1 {
        v[i].sort();
    }

    for i in 0..m {
        let pref = p[i][0] as usize;
        let town = p[i][1];
        let num = v[pref].lower_bound(&town) + 1;
        println!("{:>06}{:>06}", pref, num);
    }
}