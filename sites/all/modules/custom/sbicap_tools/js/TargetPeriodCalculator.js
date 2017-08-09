(function($) {
  Drupal.behaviors.TargetPeriodCalculator = {
    attach: function (context, settings) {
      /*$(document).on({
        mouseover: function () {
          $(this).parent().next().css("display", "block");
        },
        mouseout: function () {
          $(this).parent().next().css("display", "none");
        }
      }, "a.help-item");*/
    }
  };
})(jQuery);

function calculateTargetPeriod() {
  var currentval, monthlysaving, Rate, targetvalue, amounperiod, amountperiod, interstrate, newinterstrate, targetval, test, test1, year, months, result2, result3, result4, resultrate, sum, Rateofinterets, amtperiod, pow_sum, sum_value, simple_rate, total_sum, sum_sav, totalvalue, period, exprate, factor, factor1, factorn, factornew, factornew1, factor_cuurent, factor_mthly, totalnew, rper;
  var curr = document.getElementById("Currnetvalue").value;
  var m_saving = document.getElementById("mthlysaving").value;
  var rate_per= document.getElementById("rate").value;
  var target_value = document.getElementById("tgtvalue").value;
  var count_dot = (rate_per.match(/\./g) || []).length;
  var count_dot1 = (curr.match(/\./g) || []).length;
  var count_dot2 = (m_saving.match(/\./g) || []).length;
  var count_dot3 = (target_value.match(/\./g) || []).length;
  var temp_months = months;

  if (curr == "") {
    alert('Please Enter Current Networth');
    document.getElementById("Currnetvalue").focus();
    return false;
  }
  else if (curr < 1) {
    alert('Please Enter Current Networth Greater than Rs. 1');
    document.getElementById("Currnetvalue").focus();
    return false;
  }
  else if (m_saving == "") {
    alert('Please Enter Expected Monthly Savings');
    document.getElementById("mthlysaving").focus();
    return false;
  }
  else if (m_saving < 1) {
    alert('Please Enter Expected Monthly Saving Greater than Rs. 1');
    document.getElementById("mthlysaving").focus();
    return false;
  }
  else if (!(parseInt(curr) > parseInt(m_saving))) {
    alert('Current Networth should be greater than Expected Monthly Savings');
    document.getElementById("mthlysaving").focus();
    return false;
  }
  else if (rate_per == "") {
    alert('Please Enter Expected Interest Rate');
    document.getElementById("rate").focus();
    return false;
  }
  else if (count_dot > 1) {
    alert('Enter Invalid Expected Interested Rate');
    document.getElementById("rate").focus();
    return false;
  }
  else if (rate_per > 30 || rate_per < 1) {
    alert('Please Enter Interested Rate Between 1 and 30 %');
    document.getElementById("rate").focus();
    return false;
  }
  else if (target_value == "") {
    alert('Please Enter Target Value');
    document.getElementById("tgtvalue").focus();
    return false;
  }
  else if (target_value < 1) {
    alert('Please Enter Target Value greater than 1');
    document.getElementById("tgtvalue").focus();
    return false;
  }
  else if ((parseInt(curr) >= parseInt(target_value))) {
    alert('Target value should be greater than Current Networth');
    document.getElementById("tgtvalue").focus();
    return false;
  }
  else {
    currentval = document.getElementById("Currnetvalue").value;
    monthlysaving = document.getElementById("mthlysaving").value;
    Rate = document.getElementById("rate").value;
    targetvalue = document.getElementById("tgtvalue").value;
    amounperiod = 0.1;
    totalnew = 0;

    while (totalnew != targetvalue && totalnew < targetvalue) {
      year = Math.floor(amounperiod, 0);
      months = Math.round((amounperiod - year) * 12);
      period = (amounperiod * 12);
      exprate = (Rate / 1200);
      factor = (1 + exprate);
      factor1 = (period);
      factorn = Math.pow((factor), (factor1));
      factornew = factorn - 1;
      factornew1 = (factornew / exprate);
      factor_cuurent = Math.round(currentval * factorn);
      factor_mthly = Math.round(factornew1 * monthlysaving);
      totalnew = Math.round(factor_mthly + factor_cuurent);
      rper = (totalnew / targetvalue) * 100;

      if (rper >= 95) {
        if (rper < 99) {
          amounperiod = amounperiod + 0.01;
        }
        else if (rper > 99.8) {
          amounperiod = amounperiod + 0.00001;
        }
        else {
          amounperiod = amounperiod + 0.001;
        }
      }
      else {
        if (rper < 75) {
          amounperiod = amounperiod + 0.5;
        }
        else {
          amounperiod = amounperiod + 0.1;
        }
      }
      if (totalnew == targetvalue) {
        break;
      }
    }

    if (months == 0) {
      document.getElementById("hid_val").style.display = "";
      document.getElementById("hid_val").style.backgroundColor = "#7ccce1";
      if(year > 1) {
        document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>"  + year + " years";
      }
      else {
        document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>"  + year + " year";
      }
    }
    else if (year==0) {
      document.getElementById("hid_val").style.display = "";
      document.getElementById("hid_val").style.backgroundColor = "#7ccce1";
      if(months > 1) {
        document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>"  + months + " months";
      }
      else {
        document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>"  + months + " month";
      }
    }
    else {
      document.getElementById("hid_val").style.display = "";
      document.getElementById("hid_val").style.backgroundColor = "#7ccce1";
      if(months > 1 && year > 1) {
        document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>" + year + " Years and " + months + " months";
      }
      else if(months > 1 && year < 1) {
        document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>" + year + " Year and " + months + " months";
      }
      else if(months < 1 && year > 1) {
        document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>" + year + " Years and " + months + " month";
      }
      else if(months < 1 && year < 1) {
        document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>" + year + " Year and " + months + " month";
      }
      else {
        if(months > 1) {
          document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>" + year + " Year and " + months + " months";
        }
        else if(months < 1) {
          document.getElementById("hid_val").innerHTML = "At this saving rate, your target amount will be achieved in " + "<br>" + year + " Year and " + months + " month";
        }
      }
    }
    return false;
  }
}

function resetTargetPeriod() {
  document.getElementById("Currnetvalue").value = "";
  document.getElementById("mthlysaving").value = "";
  document.getElementById("rate").value = "";
  document.getElementById("tgtvalue").value = "";
  document.getElementById("hid_val").innerHTML = ""
  document.getElementById("hid_val").style.backgroundColor = "#DDF2F5";
  return false;
}

function isNumberKey(evt) {
  if (((evt.keyCode > 15 && (evt.keyCode < 20 || evt.keyCode > 57)) || evt.keyCode == 32 || evt.keyCode == 33 || (evt.keyCode > 34 && evt.keyCode < 39) || (evt.keyCode > 39 && evt.keyCode < 46) || evt.keyCode == 47) && evt.keyCode != 190) {
    return false;
  }
}

function isNumberKey123(evt) {
  var charCode = (evt.which) ? evt.which : evt.keyCode;
  if (charCode != 46 && charCode > 31 && (charCode < 48 || charCode > 57))
  return false;

  return true;
}
