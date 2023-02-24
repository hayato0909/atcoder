use proconio::input;
// use superslice::Ext;
use std::cmp::max;
use std::cmp::min;
use std::collections::VecDeque;
// use petgraph::unionfind::UnionFind;

fn main() {
    input! {
        n: usize, 
        m: usize,
        abt: [[usize; 3]; m],
    }
    
    let mut g: Vec<Vec<(usize, isize)>> = vec![vec![(0, 0); 0]; n];
    for i in 0..m {
        g[abt[i][0]-1].push((abt[i][1]-1, abt[i][2] as isize));
        g[abt[i][1]-1].push((abt[i][0]-1, abt[i][2] as isize));
    }

    let mut ans: isize = 1000000000000;
    for start in 0..n {
        let mut time: Vec<isize> = vec![-1; n];
        let mut q: VecDeque<usize> = VecDeque::new();
        q.push_front(start);
        time[start] = 0;
        while q.len() != 0 {
            let now = q.pop_back().unwrap();
            for i in 0..g[now].len() {
                let next = g[now][i].0;
                let t = g[now][i].1;
                if time[next] == -1 || time[now] + t < time[next] {
                    time[next] = time[now] + t;
                    q.push_front(next);
                }
            }
        }
        let mut tmp: isize = 0;
        for i in 0..n {
            tmp = max(tmp, time[i]);
        }
        ans = min(ans, tmp);
    }
    println!("{}", ans);
}