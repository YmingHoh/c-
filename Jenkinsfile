pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'g++ -Wall program3.cpp -o bir'
        echo 'Compiled'
      }
    }
    stage('Test') {
      steps {
        sh './bir'
      }
    }
    stage('Deliver') {
      steps {
        echo 'Done done done done'
      }
    }
  }
}