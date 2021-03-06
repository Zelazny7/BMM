% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/bmm_api.R
\name{BMM}
\alias{BMM}
\title{Train Bernoulli Mixture Model}
\usage{
BMM(data, K, max.iter = 10L, verbose = 1L, hbbmm = 1L)
}
\arguments{
\item{data}{A Matrix. Either dense or a sparse, column-compressed, pattern matrix}

\item{K}{The number of prototypes to train}

\item{max.iter}{Maximum number of iterations. The algorithm will quit if this is reached
before convergence}

\item{verbose}{Print convergence information while training}

\item{hbbmm}{Impose a beta prior on the prototype components. Calculated empircally.}
}
\value{
A list with class attribute, \code{BMM}.
}
\description{
Train Bernoulli Mixture Model
}
